#!/bin/bash

git status -s --ignored | grep '!!' | awk {'print $2'}
