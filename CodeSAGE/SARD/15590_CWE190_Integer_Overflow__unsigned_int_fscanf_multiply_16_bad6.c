#ifndef VAR1
void FUN1()
{
 unsigned int VAR2;
 VAR2 = 0;
 while(1)
 {
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 break;
 }
 while(1)
 {
 if(VAR2 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > UINT_MAX, this will overflow */
 unsigned int VAR3 = VAR2 * 2;
 FUN2(VAR3);
 }
 break;
 }
}
#endif
