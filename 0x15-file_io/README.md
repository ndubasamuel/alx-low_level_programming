File descriptors are a part of the POSIX API.
Each Unix process (except perhaps daemons) should have three standard POSIX file descriptors, 
corresponding to the three standard streams:

Integer value	Name	<unistd.h> symbolic constant[1]	<stdio.h> file stream[2]
0	Standard input	STDIN_FILENO	stdin
1	Standard output	STDOUT_FILENO	stdout
2	Standard error	STDERR_FILENO	stderr

