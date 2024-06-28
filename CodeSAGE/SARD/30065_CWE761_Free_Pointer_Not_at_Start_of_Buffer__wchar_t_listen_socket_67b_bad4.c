#ifndef VAR1
void FUN1(CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_listen_socket_67_structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR3 != VAR5''; VAR3++)
 {
 if (*VAR3 == VAR6)
 {
 FUN2("");
 break;
 }
 }
 free(VAR3);
}
#endif
