#ifndef VAR1
void FUN1()
{
 char VAR2;
 VAR2 = '';
 while(1)
 {
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 break;
 }
 while(1)
 {
 {
 /* POTENTIAL FLAW: if (data*data) > CHAR_MAX, this will overflow */
 char VAR3 = VAR2 * VAR2;
 FUN2(VAR3);
 }
 break;
 }
}
#endif
