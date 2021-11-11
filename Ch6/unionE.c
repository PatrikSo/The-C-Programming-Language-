
union u_tag {
  int ival;
  float fval;
  char *sval;
} u;

/* variable u is the size of the largest type, can hold any of these types! */

int main()
{
  if(utype == INT)
    printf("%d\n", u.ival);
  else if (utype == FLOAT)
    printf("%f\n", u.fval);
  else if (utype == STRING)
    printf("%s\n", u.sval);
  else
    printf("bad type %d in utype\n", utype);

}
