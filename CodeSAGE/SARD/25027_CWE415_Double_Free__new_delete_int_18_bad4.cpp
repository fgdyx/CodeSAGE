#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = new int;
 /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
 delete VAR2;
 goto VAR4;
VAR4:
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete VAR2;
}
#endif
