#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 wchar_t * VAR2 = *VAR3;
 VAR2 = new wchar_t[100];
 /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
 delete [] VAR2;
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete [] VAR2;
 }
}
#endif
