#ifndef VAR1
static unsigned int FUN1(unsigned int VAR2)
{
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 return VAR2;
}
void FUN2()
{
 unsigned int VAR2;
 VAR2 = 0;
 VAR2 = FUN1(VAR2);
 if(VAR2 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > UINT_MAX, this will overflow */
 unsigned int VAR3 = VAR2 * 2;
 FUN3(VAR3);
 }
}
#endif
