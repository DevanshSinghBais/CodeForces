<h2><a href="https://codeforces.com/contest/267/problem/A" target="_blank" rel="noopener noreferrer">267A — Subtractions</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 267A](https://codeforces.com/contest/267/problem/A) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">A. Subtractions</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>You've got two numbers. As long as they are both larger than zero, they go through the same operation: subtract the lesser number from the larger one. If they equal substract one number from the another. For example, one operation transforms pair (4,17) to pair (4,13), it transforms (5,5) to (0,5).</p><p>You've got some number of pairs (<span class="tex-span"><i>a</i><sub class="lower-index"><i>i</i></sub>, <i>b</i><sub class="lower-index"><i>i</i></sub></span>). How many operations will be performed for each of them?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains the number of pairs <span class="tex-span"><i>n</i></span> (<span class="tex-span">1  ≤  <i>n</i>  ≤  1000</span>). Then follow <span class="tex-span"><i>n</i></span> lines, each line contains a pair of positive integers <span class="tex-span"><i>a</i><sub class="lower-index"><i>i</i></sub>, <i>b</i><sub class="lower-index"><i>i</i></sub></span> (<span class="tex-span">1  ≤  <i>a</i><sub class="lower-index"><i>i</i></sub>,  <i>b</i><sub class="lower-index"><i>i</i></sub>  ≤  10<sup class="upper-index">9</sup></span>).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the sought number of operations for each pair on a single line.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00266920456066281" id="id005301251861834131" class="input-output-copier">Copy</div></div><pre id="id00266920456066281">2<br>4 17<br>7 987654321<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001883726274473866" id="id0078629339837749" class="input-output-copier">Copy</div></div><pre id="id001883726274473866">8<br>141093479<br></pre></div></div></div>