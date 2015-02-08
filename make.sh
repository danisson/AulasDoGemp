#!/bin/bash
title="$(cat aulas/$1.md | head -2 | tail -1)"

m4 aulas/$1.md | pandoc --smart -f markdown_strict+startnum+backtick_code_blocks+inline_code_attributes+markdown_in_html_blocks -t html \
               | prepend "define(\`NUM',$2)define(\`TITLE',$title)include(index.template)" | m4 > html/$1.html