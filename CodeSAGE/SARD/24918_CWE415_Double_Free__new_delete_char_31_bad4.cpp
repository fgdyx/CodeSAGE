#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = new char;
 /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
 delete VAR2;
 {
 char * VAR3 = VAR2;
 char * VAR2 = VAR3;
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete VAR2;
 }
}
#endif
