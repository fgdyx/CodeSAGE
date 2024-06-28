#ifndef VAR1
void FUN1(wchar_t * &VAR2)
{
 VAR2 = new wchar_t;
 /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
 delete VAR2;
}
#endif
