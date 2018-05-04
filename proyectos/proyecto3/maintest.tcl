#!/usr/bin/expect -f

# For colors

proc capability cap {expr {![catch {exec tput -S << $cap}]}}

proc colorterm {} {expr {[capability setaf] && [capability setab]}}

proc tput args {exec tput -S << $args >/dev/tty}

array set color {black 0 red 1 green 2 yellow 3 blue 4 magenta 5 cyan 6 white 7}

proc foreground x {exec tput -S << "setaf $::color($x)" > /dev/tty}

proc background x {exec tput -S << "setab $::color($x)" > /dev/tty}

proc reset {} {exec tput sgr0 > /dev/tty}



#Test the program

eval spawn [lrange $argv 0 end]


#Put your test case here


send "2\n
4\n
1 4 3 1 2\n
2 2 1 3 4\n
3 1 3 4 2\n
4 4 3 1 2\n
1 3 2 4 1\n
2 2 3 1 4\n
3 3 1 2 4\n
4 3 2 4 1\n
7\n
1 3 4 2 1 6 7 5\n
2 6 4 2 3 5 1 7\n
3 6 3 5 7 2 4 1\n
4 1 6 3 2 4 7 5\n
5 1 6 5 3 4 7 2\n
6 1 7 3 4 5 6 2\n
7 5 6 2 4 3 7 1\n
1 4 5 3 7 2 6 1\n
2 5 6 4 7 3 2 1\n
3 1 6 5 4 3 7 2\n
4 3 5 6 7 2 4 1\n
5 1 7 6 4 3 5 2\n
6 6 3 7 5 2 4 1\n
7 1 7 4 2 6 5 3\r"

expect "1 3\n
2 2\n
3 1\n
4 4\n
1 4\n
2 5\n
3 1\n
4 3\n
5 7\n
6 6\n
7 2\r" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
