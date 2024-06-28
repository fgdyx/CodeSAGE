#ifndef VAR1
void FUN1(wchar_t * VAR2[]);
void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new wchar_t[100];
 wcscpy(VAR3, VAR4"");
 FUN3(VAR3);
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
