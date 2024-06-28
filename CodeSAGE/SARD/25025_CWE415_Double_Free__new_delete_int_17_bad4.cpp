#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 int * VAR4;
 VAR4 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR4 = new int;
 /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
 delete VAR4;
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete VAR4;
 }
}
#endif
