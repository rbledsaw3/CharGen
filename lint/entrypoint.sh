#!/usr/bin/env bash

folders=("include" "includes" "src" "source" "sources" "test" "tests")
for folder in "${folders[@]}"
do
    echo $(folder)
    if [ -d ${folder} ]; then
        command="cpplint --filter=-build/include_subdir,-legal/copyright --recursive ${folder}/*"
        echo $(command)
        if ${command} | grep "error"; then
            echo "::ERROR:: Review code"
            exit 1
        fi
    fi
done
