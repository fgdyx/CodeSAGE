#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cat_67_structType VAR2)
{
 char * VAR3 = VAR2.VAR4;
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 strcat(VAR3, VAR5);
 FUN2(VAR3);
 }
}
#endif
