#ifndef VAR1
static void FUN1()
{
 unsigned int VAR2 = VAR3;
 if(VAR2 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > UINT_MAX, this will overflow */
 unsigned int VAR4 = VAR2 * 2;
 FUN2(VAR4);
 }
}
void FUN3()
{
 unsigned int VAR2;
 VAR2 = 0;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 VAR3 = VAR2;
 FUN1();
}
#endif
