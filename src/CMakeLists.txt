add_executable(msgpu) 

target_sources(msgpu 
    PRIVATE 
        ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp 
)

target_link_libraries(msgpu 
    PRIVATE 
        pico_stdlib 
)

pico_add_extra_outputs(msgpu)
