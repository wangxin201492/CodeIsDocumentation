#!/bin/bash

#usage
function usage() {
cat << EOF
usage:
    $0 -a xxx -b xxx
EOF
exit 1
}

# get cmd params
while getopts "a:bh" opt; do
    case $opt in
        a) avalue=$OPTARG ;;
        b) bvalue=1 ;;
        h|*) usage ;;
    esac
done

[[ -z $avalue || -z $bvalue ]] && usage

echo "-a : $avalue"
echo "-b : $bvalue"
