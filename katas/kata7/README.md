# Inflight Entertainment System
You've built an inflight entertainment system with on-demand movie streaming.

Users on longer flights like to start a second movie right when their first one ends, but they complain that the plane usually lands before they can see the ending. So you're building a feature for choosing two movies whose total runtimes will equal the exact flight length.

Write a function that takes an integer flight_length (in minutes) and a list of integers movie_lengths (in minutes) and returns a boolean indicating whether there are two numbers in movie_lengths whose sum equals flight_length.

When building your function:

* Assume your users will watch exactly two movies
* Don't make your users watch the same movie twice
* Optimize for runtime over memory

## Solution

The easiet solution to this problem is take the flight_length variable, go throught the the array of movie_lenghts and if the length of the movie is less than the flight_lenght, then that movie lenght is substracted to the flight length and since it is not expected to have an infinite amount of movies in the flight we can discard the hash table approach, and keep searching linearly for a movie length that is equal to the new flight length. This leaves the complexity of the solution.