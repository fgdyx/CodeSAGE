#ifndef VAR1
void FUN1()
{
 int64_t VAR2;
 VAR2 = 0LL;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 }
 else
 {
 VAR2 = -2;
 }
 if(FUN2())
 {
 if(VAR2 < 0)
 {
 /* POTENTIAL FLAW: if (data * 2) < LLONG_MIN, this will underflow */
 int64_t VAR3 = VAR2 * 2;
 FUN3(VAR3);
 }
 }
 else
 {
 if(VAR2 < 0)
 {
 if (VAR2 > (VAR4/2))
 {
 int64_t VAR3 = VAR2 * 2;
 FUN3(VAR3);
 }
 else
 {
 FUN4("");
 }
 }
 }
}
#endif
