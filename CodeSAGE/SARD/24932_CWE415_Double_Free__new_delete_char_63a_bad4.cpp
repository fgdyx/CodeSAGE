#ifndef VAR1
void FUN1(char * * VAR2);
void FUN2()
{
 char * VAR3;
 VAR3 = NULL;
 VAR3 = new char;
 /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
 delete VAR3;
 FUN1(&VAR3);
}
#endif
