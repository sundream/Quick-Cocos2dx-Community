
#ifndef __LUA_LPB_H_
#define __LUA_LPB_H_

int luaopen_pb(lua_State *L);
int luaopen_pb_buffer(lua_State* L);
int luaopen_pb_conv(lua_State* L);
int luaopen_pb_io(lua_State* L);
int luaopen_pb_slice(lua_State* L);

#endif
