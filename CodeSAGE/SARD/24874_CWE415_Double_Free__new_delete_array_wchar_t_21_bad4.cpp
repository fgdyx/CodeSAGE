#ifndef VAR1
static int VAR2 = 0;
static void FUN1(wchar_t * VAR3)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete [] VAR3;
 }
}
void FUN2()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 VAR3 = new wchar_t[100];
 /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
 delete [] VAR3;
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
