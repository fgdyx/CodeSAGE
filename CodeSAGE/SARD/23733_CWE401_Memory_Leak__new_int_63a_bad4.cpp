#ifndef VAR1
void FUN1(int * * VAR2);
void FUN2()
{
 int * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new int;
 *VAR3 = 5;
 FUN3(*VAR3);
 FUN1(&VAR3);
}
#endif
