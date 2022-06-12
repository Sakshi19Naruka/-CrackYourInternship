<h2><a href="https://leetcode.com/problems/strong-password-checker-ii/">2299. Strong Password Checker II</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A password is said to be <strong style="user-select: auto;">strong</strong> if it satisfies all the following criteria:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">It has at least <code style="user-select: auto;">8</code> characters.</li>
	<li style="user-select: auto;">It contains at least <strong style="user-select: auto;">one lowercase</strong> letter.</li>
	<li style="user-select: auto;">It contains at least <strong style="user-select: auto;">one uppercase</strong> letter.</li>
	<li style="user-select: auto;">It contains at least <strong style="user-select: auto;">one digit</strong>.</li>
	<li style="user-select: auto;">It contains at least <strong style="user-select: auto;">one special character</strong>. The special characters are the characters in the following string: <code style="user-select: auto;">"!@#$%^&amp;*()-+"</code>.</li>
	<li style="user-select: auto;">It does <strong style="user-select: auto;">not</strong> contain <code style="user-select: auto;">2</code> of the same character in adjacent positions (i.e., <code style="user-select: auto;">"aab"</code> violates this condition, but <code style="user-select: auto;">"aba"</code> does not).</li>
</ul>

<p style="user-select: auto;">Given a string <code style="user-select: auto;">password</code>, return <code style="user-select: auto;">true</code><em style="user-select: auto;"> if it is a <strong style="user-select: auto;">strong</strong> password</em>. Otherwise, return <code style="user-select: auto;">false</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> password = "IloveLe3tcode!"
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> The password meets all the requirements. Therefore, we return true.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> password = "Me+You--IsMyDream"
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> The password does not contain a digit and also contains 2 of the same character in adjacent positions. Therefore, we return false.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> password = "1aB!"
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> The password does not meet the length requirement. Therefore, we return false.</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= password.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">password</code> consists of letters, digits, and special characters: <code style="user-select: auto;">"!@#$%^&amp;*()-+"</code>.</li>
</ul>
</div>