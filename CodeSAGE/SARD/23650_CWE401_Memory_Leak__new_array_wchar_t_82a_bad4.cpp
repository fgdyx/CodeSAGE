#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = new wchar_t[100];
 wcscpy(VAR2, VAR3"");
 FUN2(VAR2);
 VAR4* VAR5 = new VAR6;
 VAR5->FUN3(VAR2);
 delete VAR5;
}
#endif
