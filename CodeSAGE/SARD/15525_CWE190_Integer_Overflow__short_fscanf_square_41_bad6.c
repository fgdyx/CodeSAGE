#ifndef VAR1
static void FUN1(short VAR2)
{
 {
 /* POTENTIAL FLAW: if (data*data) > SHRT_MAX, this will overflow */
 short VAR3 = VAR2 * VAR2;
 FUN2(VAR3);
 }
}
void FUN3()
{
 short VAR2;
 VAR2 = 0;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 FUN1(VAR2);
}
#endif
