#!/bin/sh

sudo dmesg | tail -2
sudo insmod my_driver.ko my_number=$1
sudo dmesg | tail -2
sudo rmmod my_driver.ko
sudo dmesg | tail -2
