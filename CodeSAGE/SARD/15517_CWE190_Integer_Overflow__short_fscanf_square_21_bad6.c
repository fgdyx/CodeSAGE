#ifndef VAR1
static int VAR2 = 0;
static void FUN1(short VAR3)
{
 if(VAR2)
 {
 {
 /* POTENTIAL FLAW: if (data*data) > SHRT_MAX, this will overflow */
 short VAR4 = VAR3 * VAR3;
 FUN2(VAR4);
 }
 }
}
void FUN3()
{
 short VAR3;
 VAR3 = 0;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR3);
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
