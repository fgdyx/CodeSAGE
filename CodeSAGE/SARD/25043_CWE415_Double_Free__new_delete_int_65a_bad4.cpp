#ifndef VAR1
void FUN1(int * VAR2);
void FUN2()
{
 int * VAR2;
 void (*VAR3) (int *) = VAR4;
 VAR2 = NULL;
 VAR2 = new int;
 /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
 delete VAR2;
 FUN3(VAR2);
}
#endif
