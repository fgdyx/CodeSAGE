#ifndef VAR1
static void FUN1(int64_t VAR2)
{
 if(VAR2 < 0)
 {
 /* POTENTIAL FLAW: if (data * 2) < LLONG_MIN, this will underflow */
 int64_t VAR3 = VAR2 * 2;
 FUN2(VAR3);
 }
}
void FUN3()
{
 int64_t VAR2;
 VAR2 = 0LL;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 FUN1(VAR2);
}
#endif
