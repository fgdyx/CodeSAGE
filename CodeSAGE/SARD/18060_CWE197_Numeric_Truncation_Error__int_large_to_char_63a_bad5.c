#ifndef VAR1
void FUN1(int * VAR2);
void FUN2()
{
 int VAR3;
 VAR3 = -1;
 /* FLAW: Use a number larger than SHRT_MAX */
 VAR3 = VAR4 + 5;
 FUN1(&VAR3);
}
#endif
