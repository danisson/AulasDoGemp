#!/bin/bash
title="$(cat aulas/$1.md | head -2 | tail -1)"

m4 aulas/$1.md |\
pandoc --mathjax --no-highlight --smart -f markdown_strict+startnum+backtick_code_blocks+inline_code_attributes+markdown_in_html_blocks+raw_tex+tex_math_dollars -t html |\
(echo "define(\`NUM',$2)define(\`TITLE',$title)include(index.template)" && cat) |\
m4 > html/$1.html
