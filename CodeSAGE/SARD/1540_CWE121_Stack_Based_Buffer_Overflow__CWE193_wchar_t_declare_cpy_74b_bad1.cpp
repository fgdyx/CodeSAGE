#ifndef VAR1
void FUN1(VAR2<int, wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3[2];
 {
 wchar_t VAR5[10+1] = VAR6;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 wcscpy(VAR4, VAR5);
 FUN2(VAR4);
 }
}
#endif
