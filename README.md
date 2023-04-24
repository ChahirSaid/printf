# <a href="https://git.io/typing-svg"><img src="https://readme-typing-svg.herokuapp.com?font=Fira+Code&pause=1000&width=435&lines=0x11.+C+-+Printf+" alt="Typing SVG" /></a>
# <h4>0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life</h4><br>
# <h4>1. Education is when you read the fine print. Experience is what you get if you don't</h4><br>
# <h4>2. With a face like mine, I do better in print</h4><br>
# <h4>3. What one has not experienced, one will never understand in print</h4><br>
# <h3>Compilation</h4>
<ul>
<li>Your code will be compiled this way:</li>
<pre><code>$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c</pre></code>
<li>As a consequence, be careful not to push any c file containing a <code>main</code> function in the root directory of your project (you could have a <code>test</code> folder containing all your tests files including <code>main</code> functions)</li>
<li>Our main files will include your main header file (<code>main.h</code>): <code>#include main.h</code></li>
<li>You might want to look at the gcc flag <code>-Wno-format</code> when testing with your <code>_printf</code> and the standard printf. Example of test file that you could use: </li><br>
</ul>
<pre><code>alex@ubuntu:~/c/printf$ cat main.c 
#include &lt;limits.h&gt;
#include &lt;stdio.h&gt;
#include &quot;main.h&quot;

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf(&quot;Let&#39;s try to printf a simple sentence.\n&quot;);
    len2 = printf(&quot;Let&#39;s try to printf a simple sentence.\n&quot;);
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf(&quot;Length:[%d, %i]\n&quot;, len, len);
    printf(&quot;Length:[%d, %i]\n&quot;, len2, len2);
    _printf(&quot;Negative:[%d]\n&quot;, -762534);
    printf(&quot;Negative:[%d]\n&quot;, -762534);
    _printf(&quot;Unsigned:[%u]\n&quot;, ui);
    printf(&quot;Unsigned:[%u]\n&quot;, ui);
    _printf(&quot;Unsigned octal:[%o]\n&quot;, ui);
    printf(&quot;Unsigned octal:[%o]\n&quot;, ui);
    _printf(&quot;Unsigned hexadecimal:[%x, %X]\n&quot;, ui, ui);
    printf(&quot;Unsigned hexadecimal:[%x, %X]\n&quot;, ui, ui);
    _printf(&quot;Character:[%c]\n&quot;, &#39;H&#39;);
    printf(&quot;Character:[%c]\n&quot;, &#39;H&#39;);
    _printf(&quot;String:[%s]\n&quot;, &quot;I am a string !&quot;);
    printf(&quot;String:[%s]\n&quot;, &quot;I am a string !&quot;);
    _printf(&quot;Address:[%p]\n&quot;, addr);
    printf(&quot;Address:[%p]\n&quot;, addr);
    len = _printf(&quot;Percent:[%%]\n&quot;);
    len2 = printf(&quot;Percent:[%%]\n&quot;);
    _printf(&quot;Len:[%d]\n&quot;, len);
    printf(&quot;Len:[%d]\n&quot;, len2);
    _printf(&quot;Unknown:[%r]\n&quot;);
    printf(&quot;Unknown:[%r]\n&quot;);
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
alex@ubuntu:~/c/printf$ ./printf
Let&#39;s try to printf a simple sentence.
Let&#39;s try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
alex@ubuntu:~/c/printf$
alex@ubuntu:~/c/printf$ <br>
</code></pre>
<ul>
<li>We strongly encourage you to work all together on a set of tests</li>
<li>If the task does not specify what to do with an edge case, do the same as <code>printf</code></li>
</ul>
# <h3>Copyright - Plagiarism</h3>
<ul>
<li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
<li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else&rsquo;s work. </li>
<li>You are not allowed to publish any content of this project.</li>
<li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
</ul>
<a href="https://git.io/typing-svg"><img src="https://readme-typing-svg.herokuapp.com?font=Fira+Code&pause=1000&width=435&lines=Written+by+Said+and+Othmane" alt="Typing SVG" /></a>
