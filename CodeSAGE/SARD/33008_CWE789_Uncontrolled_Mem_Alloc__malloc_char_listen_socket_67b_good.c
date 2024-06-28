#ifndef VAR1
void FUN1(CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_67_structType VAR2)
{
 size_t VAR3 = VAR2.VAR4;
 {
 char * VAR5;
 if (VAR3 > strlen(VAR6))
 {
 VAR5 = (char *)malloc(VAR3*sizeof(char));
 strcpy(VAR5, VAR6);
 FUN2(VAR5);
 free(VAR5);
 }
 else
 {
 FUN2("");
 }
 }
}
void FUN3(CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_67_structType VAR2)
{
 size_t VAR3 = VAR2.VAR4;
 {
 char * VAR5;
 if (VAR3 > strlen(VAR6) && VAR3 < 100)
 {
 VAR5 = (char *)malloc(VAR3*sizeof(char));
 strcpy(VAR5, VAR6);
 FUN2(VAR5);
 free(VAR5);
 }
 else
 {
 FUN2("");
 }
 }
}
#endif
