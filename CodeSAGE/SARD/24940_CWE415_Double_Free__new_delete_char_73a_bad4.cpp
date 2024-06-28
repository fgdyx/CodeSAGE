#ifndef VAR1
void FUN1(VAR2<char *> VAR3);
void FUN2()
{
 char * VAR4;
 VAR2<char *> VAR3;
 VAR4 = NULL;
 VAR4 = new char;
 /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
 delete VAR4;
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN1(VAR3);
}
#endif
