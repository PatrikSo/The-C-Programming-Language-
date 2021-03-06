

/* array version of strcmp
strcmp compares two strings, return negative, 0, or positive if s id lexicographically less than, equal to, or greater than t
*/

/*strcmp: return <0 if s<t, 0 if s==t, >0 if s>t */
int strcmp(char *s, char *t)
{
  int i;

  for (i = 0; s[i] == t[i]; i++)
    if(s[i] == '\0')
      return 0;
  return s[i] - t[i];
}
