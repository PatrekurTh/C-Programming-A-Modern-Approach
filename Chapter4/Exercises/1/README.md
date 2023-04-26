```
Show the output produced by each of the following program fragments. Assume that i, j,
and k are int variables.
(a) i = 5; j = 3;
printf("%d %d", i / j, i % j);
(b) i = 2; j = 3;
printf("%d", (i + 10) % j);
(c) i = 7; j = 8; k = 9;
printf("%d", (i + 10) % k / j);
(d) i = 1; j = 2; k = 3;
printf("%d", (i + 5) % (j + 2) / k);
```

**Solutions**  
<ol type="a">
  <li>1 2</li>
  <ul>
    <li>5 / 3 , 5 % 3&emsp;&emsp;&emsp;&emsp;<span style="color:grey">substitute variables</span></li>
    <li>1.667 , 2&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;<span style="color:grey">integer division truncates</span></li>
  </ul>
  <li>0</li>
  <ul>
    <li>(2 + 10) % 3&emsp;&emsp;&emsp;&emsp;<span style="color:grey">substitute variables</span></li>
    <li>12 % 3</li>
  </ul>
  <li>1</li>
  <ul>
    <li>(7 + 10) % 9 / 8 &emsp;&emsp;<span style="color:grey">substitute variables</span></li>
    <li>(17 % 9) / 8&emsp;&emsp;&emsp;&emsp; <span style="color:grey">% and / have same precedence and
are left associative</span></li>
    <li>8 / 8</li>
  </ul>
  <li>0</li>
  <ul>
    <li>(1 + 5) % (2 + 2) / 3&emsp;<span style="color:grey">substitute variables</span></li>
    <li>(6 % 4) / 3 &emsp;&emsp;&emsp;&emsp;&emsp; <span style="color:grey">same as (c)</span></li>
    <li>2 / 3</li>
    <li>0.667&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; <span style="color:grey">integer division truncates</span></li>
  </ul>
</ol>