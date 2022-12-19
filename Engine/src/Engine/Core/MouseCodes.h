#pragma once

namespace Engine {

    using MouseCode = short;

    namespace Mouse {

        enum  Button
        {
            // From SFML/Window/Mouse.hpp

            Left,     //!< The left mouse button
            Right,    //!< The right mouse button
            Middle,   //!< The middle (wheel) mouse button
            XButton1, //!< The first extra mouse button
            XButton2, //!< The second extra mouse button

            ButtonCount //!< Keep last -- the total number of mouse buttons
        };
    }
	
}