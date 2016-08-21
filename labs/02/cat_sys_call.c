/*
 *
 * Create a file to open a file as 
 *
 * gcc cat_sys_call.c -o cat_sys_call
 *
 * ./cat_sys_call
 *
 * You will need to use things like : 
 *
 * https://www.gnu.org/software/libc/manual/html_node/System-Calls.html
 *
 * The sysno ( and many others ) are defined here : 
 *
 * http://lxr.free-electrons.com/source/include/linux/syscalls.h#L517
 *
 * Thank you freelectrons !!!( they put all the kernel code in html as well as
 * amazing free trainings ) 
 *
 * As you can see the sysno is different that chmod : 
 *
 * chmod sysno : 
 *
 * asmlinkage long sys_chmod(const char __user *filename, umode_t mode);
 *
 * which translate as .. we need the name of the file and the permissions of
 * that file 
 *
 * in sys_open: 
 *
 * asmlinkage long sys_open(const char __user *filename,int flags, umode_t mode);
 *
 * which translate as .. name of the file , flags ( check gnu documentation for
 * what kind of flags do we have and the permissions of the file 
 *
 *  open(const char *pathname, int flags, mode_t mode);
 *
 *  I think that mode is not necessary .. but you will arrive to that
 *  conclusion :) 
 *
 *  Happy weekend :) 
 *
 * /
 

