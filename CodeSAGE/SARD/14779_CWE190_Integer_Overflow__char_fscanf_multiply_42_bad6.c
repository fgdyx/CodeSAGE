#ifndef VAR1
static char FUN1(char VAR2)
{
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 return VAR2;
}
void FUN2()
{
 char VAR2;
 VAR2 = '';
 VAR2 = FUN1(VAR2);
 if(VAR2 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > CHAR_MAX, this will overflow */
 char VAR3 = VAR2 * 2;
 FUN3(VAR3);
 }
}
#endif
