#ifndef VAR1
void FUN1(VAR2<int, wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3[2];
 {
 wchar_t VAR5[100*2];
 wmemset(VAR5, VAR6'', 100*2-1);
 VAR5[100*2-1] = VAR6'';
 wcscpy(VAR5, VAR4);
 FUN2(VAR5);
 }
}
#endif
