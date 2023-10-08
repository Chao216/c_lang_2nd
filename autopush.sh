#!/bin/bash
time=`date +"%D %T" `
git add *
git commit -m "auto commit @$time"
git push origin main
