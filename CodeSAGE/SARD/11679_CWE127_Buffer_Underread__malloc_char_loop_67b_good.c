#ifndef VAR1
void FUN1(CWE127_Buffer_Underread__malloc_char_loop_67_structType VAR2)
{
 char * VAR3 = VAR2.VAR4;
 {
 size_t VAR5;
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR6[VAR5] = VAR3[VAR5];
 }
 VAR6[100-1] = '';
 FUN2(VAR6);
 }
}
#endif
