//create two file in linux terminal in its own directory
//Makefile & rickRoll.c
//make file once done creating both files
//inject module via insmod
//remove module via rmmod
//read output in  syslog

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int __init rickroll_init(void){
    printk(KERN_INFO "Rick roll loaded\n");
}

static void __exit rickroll_exit(void){
    printk(KERN_INFO "Rick roll unloaded\n");
}

module_init(rickroll_init);
module_exit(rickroll_exit);
