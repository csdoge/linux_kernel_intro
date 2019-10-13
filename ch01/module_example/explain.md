module_example.c messages detection<br>
Step 1. run 'make all' on the terminal<br>
Step 2. run 'sudo insmod module_example.ko' on the terminal<br>
Step 3. run 'tail /var/log/syslog' on the terminal<br>
Step 4. find the message<br>
Step 5. run 'sudo rmmod module_example'<br>
Step 6. do step 3 and find the message<br>

command lsmod detects if the lkm is loaded in the kernel module<br>
commond dmesg outputs the message lkm produces<br>