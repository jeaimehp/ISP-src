#!/usr/bin/expect

set binaryname [lindex $argv 0];
set timeout 1
spawn ./$binaryname
 
expect "*" { send "2\r\r" }

interact
set timeout 1

spawn ./$binaryname
expect "*" { send "5\r\r" }
interact
set timeout 1

spawn ./$binaryname
expect "*" { send "10\r\r" }
interact

set timeout 1
spawn ./$binaryname
expect "*" { send "3\r\r" }
interact
