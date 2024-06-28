#ifndef VAR1
void FUN1()
{
 short VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 }
 if(FUN2())
 {
 if(VAR2 < 0)
 {
 /* POTENTIAL FLAW: if (data * 2) < SHRT_MIN, this will underflow */
 short VAR3 = VAR2 * 2;
 FUN3(VAR3);
 }
 }
}
#endif
