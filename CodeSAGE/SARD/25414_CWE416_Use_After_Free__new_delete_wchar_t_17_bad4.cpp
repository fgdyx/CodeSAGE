#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 wchar_t * VAR4;
 VAR4 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR4 = new wchar_t;
 *VAR4 = VAR5'';
 /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
 delete VAR4;
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 /* POTENTIAL FLAW: Use of data that may have been deleted */
 FUN2(*VAR4);
 }
}
#endif
