#ifndef VAR1
void FUN1(int64_t VAR2);
void FUN2()
{
 int64_t VAR2;
 VAR2 = 0LL;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 FUN1(VAR2);
}
#endif
