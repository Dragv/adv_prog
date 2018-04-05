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


send "4\n
132\n
1000\n
7\n
111111111111111110\r"

expect "Case #1: 129\n
        Case #2: 999\n
        Case #3: 7\n
        Case #4: 99999999999999999\r" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
